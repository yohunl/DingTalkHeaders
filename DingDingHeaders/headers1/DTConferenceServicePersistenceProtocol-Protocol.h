//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizConfHistoryExtensionModel, DTConferenceADModel, DTConferenceShowPageModel, NSArray, NSString;

@protocol DTConferenceServicePersistenceProtocol <NSObject>
- (void)deleteUserMobilesWithUids:(NSArray *)arg1;
- (void)saveUserMobiles:(NSArray *)arg1;
- (NSArray *)userMobilesForUids:(NSArray *)arg1;
- (void)asyncLoadConfPageModelBlock:(void (^)(DTConferenceShowPageModel *))arg1;
- (DTConferenceShowPageModel *)loadConfPageModel;
- (_Bool)updateConfPage:(DTConferenceShowPageModel *)arg1;
- (_Bool)saveConfPage:(DTConferenceShowPageModel *)arg1;
- (void)asyncLoadConfADBlock:(void (^)(DTConferenceADModel *))arg1;
- (DTConferenceADModel *)loadConfAD;
- (_Bool)updateConfAD:(DTConferenceADModel *)arg1;
- (_Bool)saveConfAD:(DTConferenceADModel *)arg1;
- (void)asyncLoadConfHistoryByUUID:(NSString *)arg1 doneBlock:(void (^)(DTBizConfHistoryExtensionModel *))arg2;
- (DTBizConfHistoryExtensionModel *)loadConfHistoryByUUID:(NSString *)arg1;
- (_Bool)updateConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
- (_Bool)saveConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
@end

