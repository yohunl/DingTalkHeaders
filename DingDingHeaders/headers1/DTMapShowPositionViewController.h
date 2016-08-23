//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTIMAnnotationViewDelegate-Protocol.h"
#import "MAMapViewDelegate-Protocol.h"

@class CLLocation, MAMapView, NSString, UIButton;

@interface DTMapShowPositionViewController : DTViewController <MAMapViewDelegate, DTIMAnnotationViewDelegate>
{
    MAMapView *_mapView;
    _Bool _showCustomNavPopView;
    _Bool _showTransmit;
    _Bool _showCurrentUserLocation;
    _Bool _showTargetLocation;
    _Bool _needUpdateCurrentLocation;
    CLLocation *_position;
    NSString *_locationTitle;
    CDUnknownBlockType _transmitClickBlock;
    UIButton *_updateUserLoactionButton;
    UIButton *_targetLoactionButton;
    CLLocation *_currentUserLocation;
}

@property(retain, nonatomic) CLLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(nonatomic) _Bool needUpdateCurrentLocation; // @synthesize needUpdateCurrentLocation=_needUpdateCurrentLocation;
@property(retain, nonatomic) UIButton *targetLoactionButton; // @synthesize targetLoactionButton=_targetLoactionButton;
@property(retain, nonatomic) UIButton *updateUserLoactionButton; // @synthesize updateUserLoactionButton=_updateUserLoactionButton;
@property(copy, nonatomic) CDUnknownBlockType transmitClickBlock; // @synthesize transmitClickBlock=_transmitClickBlock;
@property(nonatomic) _Bool showTargetLocation; // @synthesize showTargetLocation=_showTargetLocation;
@property(nonatomic) _Bool showCurrentUserLocation; // @synthesize showCurrentUserLocation=_showCurrentUserLocation;
@property(nonatomic) _Bool showTransmit; // @synthesize showTransmit=_showTransmit;
@property(nonatomic) _Bool showCustomNavPopView; // @synthesize showCustomNavPopView=_showCustomNavPopView;
@property(copy, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
@property(copy, nonatomic) CLLocation *position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)annotationViewClicked:(id)arg1;
- (void)rightNavigationItemClicked:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)showPositionOnMap;
- (void)jumpToTargetLocation:(id)arg1;
- (void)updateUserLocation:(id)arg1;
- (void)loadMapView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
