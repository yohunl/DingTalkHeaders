//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@interface DTMessageMutipleInstanceHandler : DTMessageBaseHandler
{
    _Bool _needReloadData;
}

@property(nonatomic) _Bool needReloadData; // @synthesize needReloadData=_needReloadData;
- (void)onNotifyFrontVCToReloadData:(id)arg1;
- (void)notifyFrontVCToReloadData;
- (void)reloadData;
- (void)removeObserver;
- (void)addObserver;

@end
