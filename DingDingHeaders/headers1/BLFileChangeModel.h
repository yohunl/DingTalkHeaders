//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class BLFileAPIModel;

@interface BLFileChangeModel : BLBaseAPIModel
{
    long long _action;
    BLFileAPIModel *_targetFile;
}

@property(retain, nonatomic) BLFileAPIModel *targetFile; // @synthesize targetFile=_targetFile;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
