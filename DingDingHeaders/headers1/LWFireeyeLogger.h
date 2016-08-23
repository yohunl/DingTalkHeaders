//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWTraceIdCache;

@interface LWFireeyeLogger : NSObject
{
    LWTraceIdCache *_traceIdCache;
}

+ (int)getIncrement;
+ (id)sharedInstance;
@property(retain, nonatomic) LWTraceIdCache *traceIdCache; // @synthesize traceIdCache=_traceIdCache;
- (void).cxx_destruct;
- (void)logWithTraceId:(id)arg1 mid:(id)arg2 Level:(int)arg3 tag:(id)arg4 message:(id)arg5;
- (void)logWithLogChainId:(id)arg1 mid:(id)arg2 level:(int)arg3 tag:(id)arg4 description:(id)arg5 messageDic:(id)arg6 isEnd:(_Bool)arg7;
- (id)getFormattedTime;
- (id)generateTraceIdString;
- (id)logArchivesPath;
- (id)traceIdLogPath;
- (id)baseLogDirectory;
- (id)init;

@end
