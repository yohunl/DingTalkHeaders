//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LAPluginBase, NSDictionary, NSString;

@protocol LAPluginDelegate <NSObject>
- (void)dispatchEvent:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)plugin:(LAPluginBase *)arg1 callAction:(NSString *)arg2 data:(NSDictionary *)arg3 callBack:(void (^)(id))arg4;
@end

