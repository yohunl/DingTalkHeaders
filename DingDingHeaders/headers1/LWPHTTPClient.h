//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LWPHTTPClient : NSObject
{
}

+ (id)defaultClient;
- (unsigned long long)stringEncoding;
- (id)execute:(id)arg1 HTTPMethod:(id)arg2 headers:(id)arg3 parameters:(id)arg4 body:(id)arg5 timeout:(double)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)POST:(id)arg1 headers:(id)arg2 body:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)GET:(id)arg1 headers:(id)arg2 body:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end
