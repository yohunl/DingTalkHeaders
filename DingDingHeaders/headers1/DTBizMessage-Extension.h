//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBizMessage.h"

@interface DTBizMessage (Extension)
+ (void)asyncStoreExtensionInMessage:(id)arg1;
- (void)setVideoUploadTaskId:(id)arg1;
- (id)videoUploadTaskId;
- (void)setVideoUploadPaused:(_Bool)arg1;
- (_Bool)hasVideoUploadPaused;
- (void)setVideoUploadProgress:(double)arg1;
- (double)videoUploadProgress;
- (void)setAudioTranslationContent:(id)arg1;
- (id)audioTranslationContent;
- (void)setExpandedAudioTranslationContent:(_Bool)arg1;
- (_Bool)isExpandedAudioTranslationContent;
- (void)sourceTagInfo:(CDUnknownBlockType)arg1;
- (_Bool)needShowSourceTagView;
- (id)extensionSourceFromType;
- (id)extensionTranslateProvider;
- (id)extensionTranslate;
- (_Bool)hasExtensionTranslate;
- (id)extensionValueForKey:(id)arg1;
- (void)setExtensionValue:(id)arg1 forKey:(id)arg2;
- (void)setExtensionTranslateStatus:(id)arg1;
- (id)extensionTranslateStatus;
- (void)setExtensionDictionary:(id)arg1;
- (id)extensionDictionary;
- (void)setExtension:(id)arg1;
@end
