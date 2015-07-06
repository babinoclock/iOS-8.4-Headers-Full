/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKActionSheetDelegate.h>
#import <WebKit/DDDetectionControllerInteractionDelegate.h>

@class UIView, NSString;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate> {

	WeakObjCPtr<id<WKActionSheetAssistantDelegate> > _delegate;
	RetainPtr<WKActionSheet>* _interactionSheet;
	RetainPtr<_WKActivatedElementInfo>* _elementInfo;
	UIView* _view;

}

@property (assign,nonatomic,__weak) id<WKActionSheetAssistantDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<WKActionSheetAssistantDelegate>)arg1 ;
-(id<WKActionSheetAssistantDelegate>)delegate;
-(id)initWithView:(id)arg1 ;
-(id)superviewForSheet;
-(void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(char)arg2 ;
-(char)presentSheet;
-(CGRect)_presentationRectForSheetGivenPoint:(CGPoint)arg1 inHostView:(id)arg2 ;
-(void)showLinkSheet;
-(CGRect)initialPresentationRectInHostViewForSheet;
-(id)hostViewForSheet;
-(void)updateSheetPosition;
-(void)updatePositionInformation;
-(void)cleanupSheet;
-(CGRect)presentationRectInHostViewForSheet;
-(void)showImageSheet;
-(void)showDataDetectorsSheet;
@end

