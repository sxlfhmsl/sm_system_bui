#pragma once

#include <QReadWriteLock>
#include <QMutex>
#include <QAtomicPointer>
#include <qDebug>

// 实现单例之模板类
template<class T>
class Singleton
{
private:
	// 禁止构造函数
	Singleton();
	// 禁止拷贝函数
	Singleton(const Singleton<T> &);
	// 防止赋值拷贝函数
	Singleton<T>& operator= (const Singleton<T> &);

	//读写锁
	QReadWriteLock m_internalMutex;
	//互斥锁
	static QMutex m_mutex;
	//实例
	static QAtomicPointer<T> m_instance;

public:
	static T* instance();
};

// 一个线程可以锁同一互斥量
template<class T>
QMutex Singleton<T>::m_mutex(QMutex::Recursive);

// 原子
template<class T>
QAtomicPointer<T> Singleton<T>::m_instance;

template<typename T>
T* Singleton<T>::instance()
{
#ifndef Q_ATOMIC_POINTER_TEST_AND_SET_IS_SOMETIMES_NATIVE
	if (!QAtomicPointer<T>::isTestAndSetNative())
	{
		qDebug() << "Error: TestAndSetNative not supported!";
	}
#endif /*Q_ATOMIC_POINTER_TEST_AND_SET_IS_SOMETIMES_NATIVE*/
	if (m_instance.testAndSetOrdered(0, 0))
	{
		QMutexLocker locker(&m_mutex);
		m_instance.testAndSetOrdered(0, new T);
	}
	return m_instance.load();
}