/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@optional
-(float)desiredHeightForWidth:(float)arg1;
-(float)desiredHeight;
-(id)navigationTitle;
-(void)transcriptViewControllerTappedOutsideEditingView;

@required
-(void)siriWillActivateFromSource:(int)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;

@end
