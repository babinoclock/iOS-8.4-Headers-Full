/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, UIImage;

@interface _WKActivatedElementInfo : NSObject {

	RetainPtr<NSURL>* _URL;
	RetainPtr<NSString>* _title;
	CGPoint _interactionLocation;
	RefPtr<WebKit::ShareableBitmap>* _image;
	RetainPtr<UIImage>* _uiImage;
	int _type;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image; 
@property (nonatomic,readonly) CGPoint _interactionLocation; 
-(int)type;
-(NSString *)title;
-(UIImage *)image;
-(NSURL *)URL;
-(CGRect)boundingRect;
-(id)_initWithType:(int)arg1 URL:(id)arg2 location:(CGPoint)arg3 title:(id)arg4 rect:(CGRect)arg5 image:(ShareableBitmap*)arg6 ;
-(CGPoint)_interactionLocation;
@end
