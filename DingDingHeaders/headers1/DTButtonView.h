//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTButton, NSString;

@interface DTButtonView : UIView
{
    NSString *_title;
    DTButton *_button;
}

+ (id)DT_BV1;
@property(retain, nonatomic) DTButton *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithDTKey:(id)arg1;

@end

