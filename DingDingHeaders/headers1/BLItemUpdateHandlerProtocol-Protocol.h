//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLAccount, BLItemToUpdate, BLItemUpdateResponseAPIModel, NSArray, NSDictionary;

@protocol BLItemUpdateHandlerProtocol <NSObject>
- (NSDictionary *)updateItemChangesParam:(NSArray *)arg1;
- (void)processItemUpdateResponse:(BLItemUpdateResponseAPIModel *)arg1 updateItem:(BLItemToUpdate *)arg2 forAccount:(BLAccount *)arg3;
@end
