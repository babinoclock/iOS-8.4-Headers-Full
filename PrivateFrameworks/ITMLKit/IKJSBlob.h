/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSBlob.h>

@protocol IKJSBlob <JSExport>
@end


@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

