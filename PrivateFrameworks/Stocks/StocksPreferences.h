/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserDefaults;

@interface StocksPreferences : NSObject {

	char _changeColorSwapped;
	unsigned _textDirection;
	NSUserDefaults* _sharedDefaults;
	char _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) char changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned textDirection;                                           //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) char textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)synchronize;
-(id)stringForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(unsigned)textDirection;
-(void)resetLocale;
-(char)textAttachmentDirectionIsRightToLeft;
-(char)isChangeColorSwapped;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

