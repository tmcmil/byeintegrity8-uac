

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for pcasvc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __pcasvc_h__
#define __pcasvc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PcaService_INTERFACE_DEFINED__
#define __PcaService_INTERFACE_DEFINED__

/* interface PcaService */
/* [explicit_handle][version][uuid] */ 

long RAiMonitorProcess( 
    handle_t bindingHandle,
    /* [in] */ unsigned __int3264 hProcess,
    /* [in] */ long unknown0,
    /* [string][unique][in] */ wchar_t *exeFileName,
    /* [string][unique][in] */ wchar_t *cmdLine,
    /* [string][unique][in] */ wchar_t *workingDir,
    /* [in] */ long flags);



extern RPC_IF_HANDLE PcaService_v1_0_c_ifspec;
extern RPC_IF_HANDLE PcaService_v1_0_s_ifspec;
#endif /* __PcaService_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


