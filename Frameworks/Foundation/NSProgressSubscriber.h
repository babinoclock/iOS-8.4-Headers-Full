/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSProgressSubscriber <NSObject>
@required
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4;
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(char)arg4;

@end
