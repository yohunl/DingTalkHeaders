//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, RequestHandler;

@protocol LWMCoder <NSObject>
- (NSString *)valueForHeader;
- (NSString *)keyForHeader;
- (id)decode:(id)arg1 modelClass:(Class)arg2;
- (id)decode:(id)arg1 handler:(RequestHandler *)arg2;
- (id)decode:(id)arg1 meta:(id)arg2;
- (NSData *)encode:(NSArray *)arg1;
@end

