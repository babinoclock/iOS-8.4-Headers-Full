/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MediaPlayerUI/IKAppDocumentDelegate.h>

@protocol MPUExtrasLoadingViewDelegate;
@class IKAppDocument, NSDictionary, MPUExtrasActivityIndicator, NSString;

@interface MPUExtrasLoadingView : UIView <IKAppDocumentDelegate> {

	IKAppDocument* _document;
	NSDictionary* _options;
	MPUExtrasActivityIndicator* _activityIndicator;
	id<MPUExtrasLoadingViewDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelCountdownToVisibility;
-(id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)startCountdownToVisibilityWithInterval:(double)arg1 ;
-(void)_show;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
@end

