/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSVSystemDialogTextField : NSObject {

	char _secure;
	NSString* _title;
	int _keyboardType;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isSecure,nonatomic) char secure;              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) int keyboardType;                         //@synthesize keyboardType=_keyboardType - In the implementation block
+(id)textFieldWithTitle:(id)arg1 secure:(char)arg2 ;
+(id)textFieldWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSecure:(char)arg1 ;
-(char)isSecure;
-(id)initWithTitle:(id)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
@end

