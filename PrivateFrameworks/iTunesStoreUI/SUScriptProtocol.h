/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray * allowedOrientations; 
@property (readonly) NSString * clientIdentifier; 
@property (retain) NSString * copyright; 
@property (assign) char excludeFromNavigationHistory; 
@property (retain) SUScriptURLRequest * overlayBackgroundURLRequest; 
@property (readonly) NSString * protocolVersion; 
@property (assign) char shouldShowInOverlay; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)protocolVersion;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)copyright;
-(NSArray *)allowedOrientations;
-(void)setAllowedOrientations:(NSArray *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(id)_copyProtocol;
-(void)_setProtocol:(id)arg1 ;
-(id)_webThreadValueForProtocolKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forProtocolKey:(id)arg2 ;
-(void)setValuesFromDictionary:(id)arg1 ;
-(char)excludeFromNavigationHistory;
-(SUScriptURLRequest *)overlayBackgroundURLRequest;
-(void)setExcludeFromNavigationHistory:(char)arg1 ;
-(void)setOverlayBackgroundURLRequest:(SUScriptURLRequest *)arg1 ;
-(void)setShouldShowInOverlay:(char)arg1 ;
-(char)shouldShowInOverlay;
@end

