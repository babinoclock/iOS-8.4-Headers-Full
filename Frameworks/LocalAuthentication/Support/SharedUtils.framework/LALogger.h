/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LALogger : NSObject {

	char _loggingEnabled;

}

@property (getter=isLoggingEnabled,nonatomic,readonly) char loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
+(id)sharedInstance;
-(void)readPreferences;
-(void)dealloc;
-(id)init;
-(char)isLoggingEnabled;
@end

