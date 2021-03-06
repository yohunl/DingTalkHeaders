//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DTMarkupParser : NSObject
{
    _Bool _isAllEmotions;
    _Bool _allowBigSizeWhenAllEmotions;
    _Bool _neededParseEmotions;
    NSMutableArray *_images;
    double _pictureSize;
    NSMutableArray *_emotionStrings;
}

@property(retain, nonatomic) NSMutableArray *emotionStrings; // @synthesize emotionStrings=_emotionStrings;
@property(nonatomic) _Bool neededParseEmotions; // @synthesize neededParseEmotions=_neededParseEmotions;
@property(nonatomic) _Bool allowBigSizeWhenAllEmotions; // @synthesize allowBigSizeWhenAllEmotions=_allowBigSizeWhenAllEmotions;
@property(nonatomic) _Bool isAllEmotions; // @synthesize isAllEmotions=_isAllEmotions;
@property(nonatomic) double pictureSize; // @synthesize pictureSize=_pictureSize;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)match:(id)arg1 beginTag:(id)arg2 endTag:(id)arg3;
- (id)match:(id)arg1;
- (id)matchKeyWords:(id)arg1;
- (double)realPictureSize:(id)arg1;
- (void)attributeStringFromMarkup:(id)arg1 attributes:(id)arg2 emotionDictionary:(id)arg3 result:(id)arg4;
- (id)attributeStringFromMarkup:(id)arg1 attributes:(id)arg2 emotionDictionary:(id)arg3 keyWordColor:(id)arg4;
- (id)init;

@end

