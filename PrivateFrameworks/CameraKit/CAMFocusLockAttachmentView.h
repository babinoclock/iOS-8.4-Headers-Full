/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMFocusAttachmentView.h>

@interface CAMFocusLockAttachmentView : CAMFocusAttachmentView {

	char _locked;

}

@property (assign,getter=isLocked,nonatomic) char locked;              //@synthesize locked=_locked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(void)_updateText;
@end

