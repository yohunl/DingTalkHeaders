//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBDecoder : NSObject
{
}

+ (int)computeInitialSampleSize:(struct CGSize)arg1 minSideLength:(int)arg2 maxNumOfPixels:(int)arg3;
+ (int)computeSampleSize:(struct CGSize)arg1 minSideLength:(int)arg2 maxNumOfPixels:(int)arg3;
+ (id)decodeUIImage:(id)arg1 type:(int)arg2;
+ (id)decodeUIImage:(id)arg1;
+ (id)decodeCVPixelBuffer:(struct __CVBuffer *)arg1 rectOfInterest:(struct CGRect)arg2 resample:(_Bool)arg3 type:(int)arg4;

@end
