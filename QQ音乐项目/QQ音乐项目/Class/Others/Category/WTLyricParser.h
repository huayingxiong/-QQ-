//
//  WTLyricParser.h
//  QQ音乐项目
//
//  Created by a on 1/4/16.
//  Copyright © 2016年 wtt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTLyricParser : NSObject

+(NSArray *) linelyricsWithLyricFileName:(NSString *)fileName;

@end
