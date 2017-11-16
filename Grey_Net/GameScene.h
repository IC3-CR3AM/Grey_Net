//
//  GameScene.h
//  Grey_Net
//
//  Created by Frank Chen on 2017/11/16.
//  Copyright © 2017年 Frank Chen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface GameScene : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
