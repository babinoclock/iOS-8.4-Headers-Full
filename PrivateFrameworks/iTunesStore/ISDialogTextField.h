/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/SSXPCCoding.h>

@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding> {

	int _keyboardType;
	char _secure;
	NSString* _title;
	NSString* _value;

}

@property (assign) int keyboardType;                                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecure) char secure;                            //@synthesize secure=_secure - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) NSString * value;                                //@synthesize value=_value - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFieldWithTitle:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSecure:(char)arg1 ;
-(char)isSecure;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
@end

