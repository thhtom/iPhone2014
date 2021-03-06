//
//  Comments.h
//  NetDemo
//
//  Created by ccr  on 14-12-6.
//  Copyright (c) 2014年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Comments : NSObject
{
    //楼层
    int floor;
    //内容
    NSString *content;
    //作者
    NSString *anchor;
    //糗事id
    NSString *commentsID;
}
@property (nonatomic,assign) int floor;
@property (nonatomic,copy) NSString *commentsID;
@property (nonatomic,copy) NSString *content;
@property (nonatomic,copy) NSString *anchor;
- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
