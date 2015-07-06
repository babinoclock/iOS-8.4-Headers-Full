/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBLockScreenNotificationCell, NSString;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	SBLockScreenNotificationCell* _associatedCell;

}

@property (assign,nonatomic) SBLockScreenNotificationCell * associatedCell;              //@synthesize associatedCell=_associatedCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)scrollThresholdForPasscodeScroll;
-(SBLockScreenNotificationCell *)associatedCell;
-(void)setAssociatedCell:(SBLockScreenNotificationCell *)arg1 ;
@end
