//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, PLCrashReportApplicationInfo, PLCrashReportExceptionInfo, PLCrashReportMachExceptionInfo, PLCrashReportMachineInfo, PLCrashReportProcessInfo, PLCrashReportSignalInfo, PLCrashReportSystemInfo;

@interface PLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    PLCrashReportSystemInfo *_systemInfo;
    PLCrashReportMachineInfo *_machineInfo;
    PLCrashReportApplicationInfo *_applicationInfo;
    PLCrashReportProcessInfo *_processInfo;
    PLCrashReportSignalInfo *_signalInfo;
    PLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    PLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

@property(nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(retain, nonatomic) PLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) PLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(retain, nonatomic) PLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(retain, nonatomic) PLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) PLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(retain, nonatomic) PLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(retain, nonatomic) PLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;

@end
