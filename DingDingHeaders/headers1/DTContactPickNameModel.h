//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface DTContactPickNameModel : NSObject
{
    long long _nameStyle;
    long long _uid;
    long long _orgId;
    NSString *_showName;
    NSAttributedString *_attrShowName;
    NSString *_placeHolderString;
    struct CGSize _nameSize;
}

@property(nonatomic) struct CGSize nameSize; // @synthesize nameSize=_nameSize;
@property(copy, nonatomic) NSString *placeHolderString; // @synthesize placeHolderString=_placeHolderString;
@property(copy, nonatomic) NSAttributedString *attrShowName; // @synthesize attrShowName=_attrShowName;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long nameStyle; // @synthesize nameStyle=_nameStyle;
- (void).cxx_destruct;

@end

