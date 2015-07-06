/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, NSURL, NSString, NSBundle;

@interface SiriUIDownloadableImageView : UIView {

	UIImageView* _imageView;
	NSURL* _imageURL;
	char _showingPlaceHolderImage;
	NSString* _placeHolderImageName;
	NSBundle* _placeHolderImageBundle;
	float _placeHolderVerticalOffset;

}
-(void)layoutSubviews;
-(void)setImageURL:(id)arg1 ;
-(void)showPlaceHolderImage;
-(void)_setImage:(id)arg1 isPlaceHolder:(char)arg2 ;
-(id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3 ;
-(void)setPlaceHolderImageName:(id)arg1 ;
-(void)setPlaceHolderVerticalOffset:(float)arg1 ;
@end

