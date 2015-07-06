/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIButton.h>
#import <MapKit/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView, NSString;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	char _inMiniBar;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	char _selectsWhenTracking;

}

@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) char selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView; 
@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithUserTrackingView:(id)arg1 ;
+(Class)_activityIndicatorClass;
+(id)buttonWithMapView:(id)arg1 ;
-(char)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(char)arg1 ;
-(id)_imageForState:(int)arg1 controlState:(unsigned)arg2 ;
-(id)_imageForUserTrackingMode:(int)arg1 controlState:(unsigned)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(int)arg2 controlState:(unsigned)arg3 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(int)arg1 controlState:(unsigned)arg2 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(int)arg2 controlState:(unsigned)arg3 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)_repositionViews;
-(void)_updateForState:(int)arg1 ;
-(char)_isHighlightedForState:(int)arg1 ;
-(id)_defaultImageForUserTrackingMode:(int)arg1 controlState:(unsigned)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(int)arg1 controlState:(unsigned)arg2 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)sizeToFit;
-(void)updateForMiniBarState:(char)arg1 ;
-(int)_state;
-(CGRect)_selectedIndicatorBounds;
-(_MKUserTrackingButtonController *)controller;
-(void)_setState:(int)arg1 ;
-(int)_activityIndicatorStyle;
@end

