/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	char addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) char addsContentToExistingCollection; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)connectForSimulator;
-(void)connect;
-(NSString *)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(NSString *)arg1 ;
-(char)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(char)arg1 ;
@end

