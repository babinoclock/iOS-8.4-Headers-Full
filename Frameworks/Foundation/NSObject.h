/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol NSObject
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(id)retain;
-(Class)class;
-(char)respondsToSelector:(SEL)arg1;
-(char)isKindOfClass:(Class)arg1;
-(id)autorelease;
-(char)isEqual:(id)arg1;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(char)isProxy;
-(char)isMemberOfClass:(Class)arg1;
-(char)conformsToProtocol:(id)arg1;
-(unsigned)retainCount;
-(NSZone*)zone;
-(unsigned)hash;
-(Class)superclass;
-(NSString *)description;
-(oneway void)release;

@end

