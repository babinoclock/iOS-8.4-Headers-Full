/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/_NSUndoObject.h>

@interface _NSUndoBeginMark : _NSUndoObject {

	id _groupIdentifier;
	char _isDiscardable;

}
-(char)isBeginMark;
-(char)isDiscardable;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(char)arg1 ;
-(void)dealloc;
-(id)description;
@end
