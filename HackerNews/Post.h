//
//  Post.h
//  HackerNews
//
//  Created by Benjamin Gordon on 5/1/13.
//  Copyright (c) 2013 Benjamin Gordon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Post : NSObject

@property (nonatomic,retain) NSString *Username;
@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) NSString *Title;
@property (nonatomic, assign) int Points;
@property (nonatomic, assign) int CommentCount;
@property (nonatomic, retain) NSString *PostID;
@property (nonatomic, assign) BOOL HasRead;
@property (nonatomic, retain) NSDate *TimeCreated;
@property (nonatomic, retain) NSString *hnPostID;


+(Post *)postFromDictionary:(NSDictionary *)dict;

@end
