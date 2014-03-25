//
//  SKSpriteNode+DebugDraw.h
//  CatNap
//
//  Created by Jimmy Tang on 3/24/14.
//  Copyright (c) 2014 Jimmy Tang. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKSpriteNode (DebugDraw)

- (void)attachDebugRectWithSize:(CGSize)s;
- (void)attachDebugFrameFromPath:(CGPathRef)bodyPath;

@end
