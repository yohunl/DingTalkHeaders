//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface ABImageResult : NSObject
{
    float _gb;
    float _mb;
    float _b;
    unsigned long long _q;
    NSString *_p;
    UIImage *_image;
    unsigned long long _t;
    struct CGRect _fr;
}

+ (id)toString:(id)arg1;
@property(nonatomic) unsigned long long t; // @synthesize t=_t;
@property float b; // @synthesize b=_b;
@property float mb; // @synthesize mb=_mb;
@property float gb; // @synthesize gb=_gb;
@property struct CGRect fr; // @synthesize fr=_fr;
@property(retain) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *p; // @synthesize p=_p;
@property(nonatomic) unsigned long long q; // @synthesize q=_q;
- (void).cxx_destruct;
- (id)toDict;
- (id)init;

@end

