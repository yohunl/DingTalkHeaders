//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, NSString, NSURL;

@protocol DTVoIPAudioProtocol <NSObject>
- (NSString *)currentAudioOutputDevice:(AVAudioSessionRouteDescription *)arg1;
- (NSString *)currentAudioInputDevice:(AVAudioSessionRouteDescription *)arg1;
- (void)resetAudioSessionCategory;
- (float)getVolume;
- (void)enableProximity:(_Bool)arg1;
- (_Bool)setSpeaker:(_Bool)arg1;
- (void)forceStopPlayAudio;
- (void)stopPlayVibrate;
- (void)startPlayVibrateCompletion:(void (^)(void))arg1;
- (void)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 resetWhenEnd:(_Bool)arg3 numberOfLoops:(long long)arg4 error:(id *)arg5;
- (void)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 error:(id *)arg3;
- (void)startPlayAudioByURL:(NSURL *)arg1 error:(id *)arg2;
- (void)startPlayAudioByName:(NSString *)arg1 enableSpeak:(_Bool)arg2 resetWhenEnd:(_Bool)arg3 numberOfLoops:(long long)arg4 error:(id *)arg5;
- (void)startPlayAudioByName:(NSString *)arg1 enableSpeak:(_Bool)arg2 error:(id *)arg3;
- (void)startPlayAudioByName:(NSString *)arg1 error:(id *)arg2;
@end
