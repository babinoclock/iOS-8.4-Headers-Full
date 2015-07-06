/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, WKFrameInfo, NSURLRequest;

@interface WKNavigationAction : NSObject {

	RetainPtr<WKFrameInfo>* _sourceFrame;
	RetainPtr<WKFrameInfo>* _targetFrame;
	RetainPtr<NSURLRequest>* _request;
	RetainPtr<NSURL>* _originalURL;
	char _userInitiated;
	char _canHandleRequest;
	int _navigationType;

}

@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) char _userInitiated; 
@property (nonatomic,readonly) char _canHandleRequest; 
@property (nonatomic,copy) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) int navigationType;                                       //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,copy) NSURLRequest * request; 
@property (setter=_setOriginalURL:,nonatomic,copy) NSURL * _originalURL; 
-(WKFrameInfo *)sourceFrame;
-(id)description;
-(NSURLRequest *)request;
-(void)setTargetFrame:(WKFrameInfo *)arg1 ;
-(WKFrameInfo *)targetFrame;
-(id)_initWithNavigationActionData:(const NavigationActionData*)arg1 ;
-(void)setSourceFrame:(WKFrameInfo *)arg1 ;
-(void)_setOriginalURL:(id)arg1 ;
-(NSURL *)_originalURL;
-(char)_canHandleRequest;
-(char)_isUserInitiated;
-(int)navigationType;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end

