/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;

}

@property (assign,nonatomic) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
-(void)layoutMarginsDidChange;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
@end

