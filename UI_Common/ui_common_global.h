#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(UI_COMMON_LIB)
#  define UI_COMMON_EXPORT Q_DECL_EXPORT
# else
#  define UI_COMMON_EXPORT Q_DECL_IMPORT
# endif
#else
# define UI_COMMON_EXPORT
#endif
