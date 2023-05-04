#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DATABASEMANAGEMENT_LIB)
#  define DATABASEMANAGEMENT_EXPORT Q_DECL_EXPORT
# else
#  define DATABASEMANAGEMENT_EXPORT Q_DECL_IMPORT
# endif
#else
# define DATABASEMANAGEMENT_EXPORT
#endif
