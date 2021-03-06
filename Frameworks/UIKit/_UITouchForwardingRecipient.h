/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	UIResponder* fromResponder;
	UIResponder* responder;
	int recordedPhase;
	int autocompletedPhase;

}

@property (assign,nonatomic) UIResponder * fromResponder; 
@property (assign,nonatomic) UIResponder * responder; 
@property (assign,nonatomic) int recordedPhase; 
@property (assign,nonatomic) int autocompletedPhase; 
-(id)description;
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(int)recordedPhase;
-(int)autocompletedPhase;
-(void)setRecordedPhase:(int)arg1 ;
-(void)setAutocompletedPhase:(int)arg1 ;
-(id)initWithResponder:(id)arg1 fromResponder:(id)arg2 ;
-(UIResponder *)fromResponder;
-(void)setFromResponder:(UIResponder *)arg1 ;
@end

