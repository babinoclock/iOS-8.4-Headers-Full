/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {

	char _didGetTablePosition;
	unsigned _rowIndex;
	unsigned _columnIndex;
	unsigned _tableRowCount;
	unsigned _tableColumnCount;

}
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(id)prefixForChildAtIndex:(unsigned)arg1 ;
-(id)suffixForChildAtIndex:(unsigned)arg1 ;
-(void)_getTableDataIfNecessary;
-(id)_prefixForCell;
-(id)_suffixForCell;
@end
