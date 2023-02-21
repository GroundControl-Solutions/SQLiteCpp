//
// Created by mitchell on 2/21/2023.
//

#ifndef SQLITE_CPP_EXPORT_H
#define SQLITE_CPP_EXPORT_H

#if defined(_WIN32) && defined(BUILD_SHARED_LIBS)
#if defined(SQLITECPP_BUILDING_SQLITECPP)
#define SQLITECPP_LINKAGE __declspec(dllexport)
#else
#define SQLITECPP_LINKAGE __declspec(dllimport)
#endif
#else
#define SQLITECPP_LINKAGE
#endif

#ifdef __cplusplus
#define SQLITECPP_EXPORT extern "C" SQLITECPP_LINKAGE
#define SQLITECPP_EXPORT_CPP extern SQLITECPP_LINKAGE
#else
#define SQLITECPP_EXPORT extern SQLITECPP_LINKAGE
#endif

#endif // SQLITE_CPP_EXPORT_H
