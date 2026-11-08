Tarot Deck Builder

1. Game Overview

  Tarot Deck Builder is a turn-based card combat game where players choose a character, build a deck, and fight enemies and bosses.
  
  Players can focus on weapons, magic, or a combination of both. Neither weapons nor magic should be required to succeed. Each playstyle should be capable of dealing meaningful damage and surviving encounters.
  
  Players collect magical items, improve their weapons and spells, earn experience, and level up as they progress through the game.
  
  The game uses:
    - Turn-based combat.
    - Customizable decks.
    - Weapons and magic.
    - Magical items and recovery cards.
    - Character types with strengths and weaknesses.
    - Bosses with their own card decks.
    - Experience and leveling.
    - Card upgrades after boss fights.

2. Characters

  There are eight character types. Each type has one male and one female character design.
  
  1. Wizards
  2. Humans
  3. Dwarves
  4. Elves
  5. Bison
  6. Zombies
  7. Goblins
  8. Werewolves

  Character designs are cosmetic and do not count toward deck size.
  
  Character types have strengths and weaknesses against certain weapons and types of magic. Character abilities and passive traits can be added separately.

3. Player Statistics

  Each player has the following statistics:
  
  | Statistic | Description |
  | HP | Health points. Reaching 0 HP results in defeat. |
  | Maximum HP | The maximum amount of health a player can have. |
  | Level | Determines the player's available energy. |
  | Energy | Used to play cards. |
  | Speed | Determines turn order and affects the chance of avoiding attacks. |
  | Experience | Earned by defeating enemies and bosses. |

Starting player statistics:
  - Level: 1
  - HP: 20
  - Maximum HP: 20
  - Energy: 3
  - Speed: 5

  For the initial version, maximum HP stays at 20 unless a card or ability specifically changes it.

Energy

  A player's energy increases with their level.
  | Player Level | Energy Per Turn |
  |---|---:|
  | 1 | 3 |
  | 2 | 4 |
  | 3 | 5 |
  | 4 | 6 |
  | 5 | 7 |
  | 6 | 8 |
  | 7 | 9 |
  | 8+ | 10 |

  - Energy resets at the beginning of each player turn.
  - Unused energy does not carry over.
  - Players may play as many cards as their available energy allows.
  - Card energy costs are based on the card's level.
  - A card's level and the player's level are independent.

4. Speed

  Speed determines which character acts first when turn order needs to be determined.
  
  For the initial version:
    - Players have 5 Speed.
    - Bosses have 4 Speed.
    - Minions have 4 Speed.
  
  Higher Speed acts first when two or more characters need to act at the same time.
  
  Speed also affects evasion. A character gains a 5% chance to avoid an attack for every point of Speed they have above the attacker, up to a maximum bonus of 25%.
  
  For example, a character with 7 Speed attacking a character with 5 Speed has a 10% chance to have their attack avoided because of the Speed difference.
  
  A weak matchup has a separate 50% chance to miss. This weakness penalty is not reduced by Speed.
  
  Cards and effects may temporarily increase or decrease Speed.

5. Matchup Rules

Weapons and offensive spells can be strong, neutral, or weak against certain character types.
  - Strong: Adds 1 damage to the attack.
  - Neutral: No damage change.
  - Weak: The attack has a 50% chance to miss completely.

  A missed attack deals no damage.
  These matchup effects apply to offensive weapon attacks and offensive spell damage. Defensive cards are not affected.

6. Deck Building

  The maximum deck size is 20 cards.
  Players choose which cards they own to include in their deck, following the deck size limit.

Starting Deck

  Every player begins with a 10-card deck:
  | Card Type | Quantity |
  | Selected weapon | 4 copies |
  | Starting specialization spells | 2 cards |
  | Recovery cards | 2 cards |
  | Random magical items | 2 cards |

  Players choose one weapon type and receive four copies of its weapon card.
  Players begin with one magic specialization and receive its offensive and defensive spell.
  Players choose their two starting Recovery cards.
  Players receive two random magical items. These items are added to their deck.
  Duplicates of magical items are allowed.

Deck Size Rules
  - Starting deck size: 10 cards.
  - Maximum deck size: 20 cards.
  - Character designs do not count toward deck size.
  - Players can change their deck between battles.
  - Players can choose which owned cards to include in their deck.
  - Newly acquired magical items are added to the player's inventory and can be included in future decks.

7. Card Levels and Energy Costs

  Every card has a level.
  The energy cost of a card is equal to its level.
  | Card Level | Energy Cost |
  | 1 | 1 |
  | 2 | 2 |
  | 3 | 3 |
  | 4 | 4 |
  | 5 | 5 |
  | 6 | 6 |
  | 7 | 7 |
  | 8 | 8 |
  | 9 | 9 |
  | 10 | 10 |
  
  All starting weapons and spells begin at Level 3.
  Magical items have their own assigned levels.
  Recovery cards also have assigned levels.

8. Weapons

  Players choose one weapon type at the beginning of the game.
  They receive four copies of that weapon card.
  All starting weapons begin at Level 3.
  Each weapon card has an offensive attack and a defensive ability. The player chooses which ability to use when playing the card.
  The weapon's level determines its offensive damage before matchup modifiers.

Weapon Types

  | Weapon | Level | Offensive Ability | Defensive Ability |
  | Sword | 3 | Slash: Deal damage equal to weapon level. | Parry: Reduce the next incoming attack by 3 damage. |
  | Bow | 3 | Quick Shot: Deal damage equal to weapon level. | Evasive Shot: Gain +2 Speed until the next player turn. |
  | Mace | 3 | Heavy Strike: Deal damage equal to weapon level +1. | Brace: Reduce the next incoming attack by 4 damage. |
  | Knives | 3 | Double Cut: Deal two attacks, each dealing damage equal to half the weapon level, rounded up. | Quickstep: Gain +2 Speed until the next player turn. |
  | Axe | 3 | Cleave: Deal damage equal to weapon level +1. | Block: Reduce the next incoming attack by 3 damage. |
  | Spear | 3 | Pierce: Deal damage equal to weapon level. | Keep Distance: Reduce the next incoming attack by 2 damage. |
  | Poison | 3 | Poison Strike: Deal damage equal to weapon level and apply 1 poison damage for the next 2 enemy turns. | Poison Guard: Reduce the next incoming attack by 2 damage and poison the attacker for 1 damage on its next turn. |
  | Shuriken | 3 | Throw: Deal damage equal to weapon level. | Distract: Reduce the next enemy attack by 2 damage. |
  
  Weapon damage is calculated using the weapon's level and any applicable matchup modifier.
  For example, a Level 3 weapon normally deals 3 damage before matchup modifiers.

Weapon Upgrades

  Weapons can be upgraded after defeating a boss.
  After each boss victory, the player may choose one owned weapon to increase by 1 level.
    - Weapon upgrades are optional.
    - The player chooses which weapon to upgrade.
    - Weapon level cannot exceed Level 10.
    - Increasing weapon level increases its offensive damage.
    - Defensive abilities that depend on weapon level may also improve when upgraded.
  
  Players are not required to upgrade their weapon after every boss.

9. Magic
  
  Players begin with one magic specialization.
  A second specialization can be unlocked later.
  Players may have a maximum of two equipped specializations.
  Each specialization contains two spells:
    - One offensive spell.
    - One defensive spell.
  All starting spells begin at Level 3.
  Offensive spell damage uses the same matchup rules as weapons. Defensive spells are not affected by matchup modifiers.

Elemental Magic

  Fire
    - Fireball (Offensive): Deal damage equal to Fire level +1.
    - Wall of Fire (Defensive): Reduce the next incoming attack by 3 damage and deal 1 fire damage to the attacker.
  
  Water
    - Hail (Offensive): Deal damage equal to Water level.
    - Wall of Water (Defensive): Reduce the next incoming attack by 3 damage and restore 1 HP.
  
  Wind
    - Wind Gust (Offensive): Deal damage equal to Wind level and reduce the enemy's Speed by 1 for its next turn.
    - Wall of Wind (Defensive): Gain +2 Speed until the next player turn and reduce the next incoming attack by 1 damage.
  
  Earth
    - Earthquake (Offensive): Deal damage equal to Earth level +1.
    - Wall of Rock (Defensive): Reduce the next incoming attack by 4 damage.

Other Magic Specializations
  
  Teleportation
    - Blink Strike (Offensive): Teleport to the enemy and deal damage equal to Teleportation level +1.
    - Phase Shift (Defensive): Avoid the next incoming attack completely.
  
  Necromancy
    - Raise Dead (Offensive): Summon a defeated enemy to fight alongside the player. Its HP is equal to the player's Necromancy level. It deals 1 damage per turn. The summoned enemy lasts until defeated or the battle ends.
    - Undying (Defensive): If the player would be defeated, restore HP equal to the player's Necromancy level instead. This effect can only activate once per battle.
  
  Shape Shifting
    - Beast Form (Offensive): Transform into a creature and deal damage equal to Shape Shifting level +1.
    - Adaptive Form (Defensive): Transform into a defensive form and reduce the next incoming attack by an amount equal to Shape Shifting level.
  
  Restoration
    - Life Drain (Offensive): Deal damage equal to Restoration level and restore half the damage dealt as HP, rounded up.
    - Heal (Defensive): Restore HP equal to Restoration level. Healing cannot exceed maximum HP.

Spell Upgrades

  Spells can be upgraded after defeating a boss.
  After each boss victory, the player may choose one owned spell to increase by 1 level instead of upgrading a weapon.
    - Spell upgrades are optional.
    - The player chooses which spell to upgrade.
    - Spell level cannot exceed Level 10.
    - Offensive damage increases with spell level.
    - Defensive and healing effects that scale with spell level also improve.
  The player decides whether to upgrade a weapon or a spell after each boss victory.

10. Magical Items

  Magical items are cards included in the player's deck.
  Players begin with two random magical items.
  Magical items are divided into four categories:
    - Offensive
    - Defensive
    - Healing and Recovery
    - Utility
  Each magical item has a level, and its energy cost is equal to that level.
  Magical items can only be used once per battle. After being played, they go into the discard pile and cannot be used again during that battle.
  The player keeps owned magical items between battles.
  Duplicates are allowed.

Starting Item Probabilities

  Starting items are selected randomly from Levels 1–4.
  Each item has an individual probability of being selected.
  | Level | Number of Items | Individual Item Chances | Total Level Chance |
  | 1 | 6 | 9%, 9%, 8%, 8%, 8%, 8% | 50% |
  | 2 | 8 | 4%, 4%, 4%, 4%, 4%, 4%, 3%, 3% | 30% |
  | 3 | 5 | 3% each | 15% |
  | 4 | 5 | 1% each | 5% |

  Each of the player's two starting items is selected independently. This means the player can receive two copies of the same item.

Level-Up Item Rewards
  
  Whenever a player levels up, they choose one magical item of the level they have just reached.
  The selected item is added to their inventory and can be included in future decks.
  Higher-level items are primarily earned through leveling and other gameplay rewards.

Offensive Magical Items

  | Item | Level | Effect |
  | Grenade | 1 | Deals damage equal to the player's Fire level. |
  | Thunder Seed | 1 | Deals damage equal to the player's Water level. |
  | Frost Shard | 2 | Deals 2 damage and reduces the enemy's Speed by 1 for its next turn. |
  | Arcane Bomb | 3 | Deals 4 magical damage. |
  | Bloodstone | 3 | Deals 3 damage and restores 2 HP to the player. |
  | Storm Core | 4 | Deals 5 lightning damage. |
  | Void Orb | 5 | Deals 5 damage and reduces the enemy's next attack by 2 damage. |
  | Dragon's Fang | 5 | Deals 5 damage, plus 2 additional damage if the enemy has more than half its maximum HP remaining. |
  | Earthbreaker Crystal | 6 | Deals 6 earth damage and reduces the enemy's next attack by 2 damage. |
  | Molten Heart | 7 | Deals 4 fire damage immediately and 2 additional fire damage at the start of each of the enemy's next 2 turns. |
  | Soul Gem | 8 | Deals damage equal to the player's missing HP, up to a maximum of 10 damage. |
  | Phoenix Feather | 10 | Deals 10 fire damage, then explodes in a second burst dealing 10 additional fire damage to the same target. If the target is defeated by the first burst, the second burst is lost. |

Defensive Magical Items

  | Item | Level | Effect |
  | Guardian Charm | 1 | Reduces the next incoming attack by 2 damage. |
  | Frost Pack | 1 | Restores HP equal to the player's Water level. |
  | Wind Cloak | 2 | Gives the player a 25% chance to avoid the next incoming attack. |
  | Ironroot Talisman | 2 | Reduces the next incoming attack by 3 damage. |
  | Stoneheart Pendant | 3 | Reduces the next physical attack by 4 damage. |
  | Obsidian Shell | 4 | Absorbs the next 5 incoming damage. |
  | Aether Veil | 5 | Reduces the next magical attack by 6 damage. |
  | Mirror Shield | 6 | Reduces the next incoming attack by 4 damage and reflects 3 damage back to the attacker. |
  | Runic Barrier | 7 | Creates a shield that absorbs the next 8 incoming damage. |
  | Phoenix Ashes | 9 | Prevents the player's HP from dropping below 1 for the next 2 enemy turns. It does not restore HP. |

Healing and Recovery Magical Items

  | Item | Level | Effect |
  | Healing Root | 1 | Restores 2 HP. |
  | Life Crystal | 2 | Restores 4 HP. |
  | Moonwater Flask | 2 | Restores 2 HP immediately and 1 additional HP at the start of the next 2 player turns. |
  | Sun Crystal | 2 | Restores HP equal to the player's Fire level. |
  | Ancient Remedy | 3 | Removes all negative status effects currently affecting the player. |
  | Emerald Heart | 4 | Restores 2 HP immediately and 2 HP at the start of the next 2 player turns. |
  | Elixir of Life | 5 | Restores 8 HP. |
  | Soul Lantern | 6 | Restores 5 HP whenever the player defeats an enemy during the current battle. The effect ends when the battle ends. |
  | Celestial Tear | 7 | Restores 8 HP and removes all negative status effects. |
  | Rebirth Seed | 9 | If the player wins the battle, restores the player's HP to maximum before the next encounter. |

Utility Magical Items

  | Item | Level | Effect |
  | Lucky Coin | 1 | The next card played costs 1 less energy. The cost cannot go below 0. |
  | Runic Scroll | 2 | Draw 2 cards immediately, up to the maximum hand size. |
  | Hunter's Compass | 2 | Reveals the target enemy's strengths, weaknesses, and current HP. |
  | Mana Shard | 3 | Reduces the energy cost of the next spell played by 2. The cost cannot go below 0. |
  | Phantom Key | 4 | Returns one card from the discard pile to the player's hand. That card may be played once more, but its energy cost is unchanged. |
  | Galeweaver Relic | 4 | Increases the player's Speed by 3 for the next 2 enemy turns. |
  | Enchanter's Ring | 5 | Increases the damage of the next 2 offensive spells by 2 each. |
  | Chaos Dice | 6 | Randomly increases or decreases the damage of the player's next offensive card by 3. |
  | Mirror Amulet | 7 | Copies the effect of the next non-item card played. The copied effect does not cost additional energy. |
  | Cursed Crown | 8 | Increases all damage dealt by the player by 5 for the next 2 player turns. The player also takes 2 additional damage from incoming attacks during that time. |
  | Soul Contract | 9 | Doubles the damage of the player's next offensive card and restores 5 HP. The player then loses 5 HP. This cannot reduce the player below 1 HP. |
  | Timekeeper's Hourglass | 10 | Immediately restores all spent energy for the current turn and allows the player to draw up to 4 cards. The player may continue playing cards until their turn ends. |

  Item design rule: Certain magical items work especially well with specific spells, magic specializations, or playstyles. These interactions are intentional. For example, Sun Crystal benefits Fire-focused players, Mana Shard benefits spell-focused players, and Hunter's Compass helps players plan around enemy weaknesses.
  Magical items should give players reasons to experiment with different combinations rather than simply choosing the item with the highest level.

11. Recovery Cards

  Recovery cards are separate from magical items.
  They restore HP and are included in the player's deck.
  | Card | Level | Effect |
  | Bandage | 1 | Restores 1 HP. |
  | Herbal Tonic | 2 | Restores 2 HP. |
  | Healing Potion | 3 | Restores 3 HP. |
  | Greater Elixir | 4 | Restores 4 HP. |
  
  Recovery cards cannot restore HP above the player's maximum HP.
  Players choose which Recovery cards to include in their deck.
  
12. Combat Rules

Starting Combat
  At the beginning of combat:
    1. The player's deck is shuffled.
    2. The player draws 4 cards.
    3. The boss and its minions are placed into the encounter.
    4. The player begins with their current HP and level.
    5. The player's energy is set according to their level.

Player Turn

  At the beginning of each player turn:
    1. Energy resets to the player's maximum energy for their level.
    2. The player draws cards until they have 4 cards in hand or their draw pile is empty.
    3. The player may play cards as long as they have enough energy.
    4. The player may discard cards from their hand.
    5. The player ends their turn when they are finished.

  Playing a card uses its energy cost.
  Discarding a card does not restore energy.
  Players may end their turn with unused energy or cards in their hand.

Card Movement

  Cards move between three locations:
    - Draw Pile: Cards waiting to be drawn.
    - Hand: Cards currently available to play.
    - Discard Pile: Cards that have already been played or discarded.

  When a card is played, it moves to the discard pile.
  When a player discards a card from their hand, it also moves to the discard pile.
  The player's discard pile is not shuffled back into the draw pile during the same battle.
  A card cannot normally be reused during the same battle. Specific card effects, such as Phantom Key, are exceptions.

Enemy Turn

  After the player ends their turn:
    1. The boss plays one card.
    2. Each living minion attacks once.
    3. Any ongoing effects are resolved.
    4. The next player turn begins.

  The boss plays only one card per enemy turn.
  Minions use simple, fixed attacks and do not have their own card decks.

Defeat Conditions

  The player loses if:
    - Their HP reaches 0, unless an ability or item prevents defeat.
    - Their draw pile is empty and their hand is also empty(They are completely out of cards).

Victory Conditions

  The player wins when the main boss reaches 0 HP.
  Defeating the minions is not required to win.
  Defeated minions are removed from the encounter.
  
13. Status Effects

  Status effects are temporary conditions that can affect players and enemies.

  | Effect | Description |
  | Poison | Deals the listed amount of damage at the start of the affected character's turn. |
  | Slow | Reduces Speed by the listed amount for the stated duration. |
  | Shield | Absorbs incoming damage before HP is reduced. |
  | Damage Reduction | Subtracts the listed amount from an incoming attack. |
  | Evasion | Gives a chance to avoid an incoming attack completely. |
  | Damage Increase | Adds the listed amount to outgoing damage. |
  
  Unless a card specifies otherwise:
    - Temporary effects last for the duration stated on the card.
    - Damage reduction cannot reduce an attack below 0 damage.
    - Shields are removed when their protection is used up.
    - Multiple copies of the same effect do not stack unless the card specifically says they do.

14. Boss Encounters

  Bosses are stronger enemies with their own decks.
  
  Each boss encounter contains:
    - One main boss.
    - Two minions.
  
  The boss has its own HP, Speed, and card deck.
  Minions have HP, Speed, and a fixed attack.

  Boss Deck Rules
    - The boss deck is shuffled at the beginning of combat.
    - The boss plays one card per enemy turn.
    - After playing a card, it goes to the bottom of the boss deck.
    - Boss cards continue cycling through the deck.
    - Boss cards can be played more than once during the same battle.

  Minion Rules
    - Each boss begins with two minions.
    - Minions do not have card decks.
    - Each living minion attacks once per enemy turn.
    - Defeated minions are removed from combat.
    - The player chooses which enemy to attack.

15. First Boss: The Invertible Bison
  Boss Type: Bison  
  Boss Level: 1  
  Boss HP: 18  
  Boss Speed: 4  
  Boss Deck Size: 6 cards

  The Invertible Bison is a fictionalized parody of a math professor. He is intentionally annoying, constantly bringing up math concepts, and occasionally talking about his brother in the middle of combat.
  His attacks and dialogue are built around the math-class experience.

  Boss Cards
  | Card | Level | Effect |
    | YOU'VE JUST BEEN DROESCHED! | 3 | Deals 4 damage to the player. |
    | INVERTIBLE MATRIX THEOREM!!! | 2 | Deals 3 damage to the player. |
    | Let Me Tell You About My Brother | 1 | Reduces the player's energy by 1 on their next turn. |
    | Pop Quiz | 2 | Forces the player to discard 1 card from their hand, if possible. |
    | That's Not How You Do It | 1 | Reduces the player's next offensive attack by 1 damage. |
    | Show Your Work | 2 | Deals 2 damage and reduces the player's Speed by 1 for their next turn. |

  Boss card effects are resolved when the card is played. Afterward, the card goes to the bottom of the boss deck.

Minions

  The Invertible Bison has two minions.
  
  | Statistic | Each Minion |
  | Level | 1 |
  | HP | 6 |
  | Speed | 4 |
  | Attack | 2 damage per enemy turn |

  Both minions use the same basic attack.

16. Experience and Leveling

  Players earn experience by defeating enemies and bosses.
  Experience requirements and rewards can be balanced as the game develops.
  When a player levels up:
    - Their maximum energy increases according to the energy table.
    - They receive one magical item of the level they have just reached, which they choose.
    - Their new item is added to their inventory.

  Player level and card level are separate.
  A player can have a high player level while still using lower-level cards.

17. Upgrading After Boss Fights

  After defeating a boss, the player may upgrade one weapon or one spell they own.
  The player chooses which card to upgrade.
    - Each upgrade increases the card's level by 1.
    - Weapon and spell levels cannot exceed Level 10.
    - Upgrades are optional.
    - The player does not have to upgrade the same card every time.
    - Upgrades improve the card's effects according to its description.

  Magical items are not upgraded through this system. They are acquired through level-up rewards and other gameplay rewards.

18. Initial Prototype Values

  The following values are the starting balance for the first playable version. They can be adjusted after testing.
    | Feature | Initial Value |
    | Starting player HP | 20 |
    | Starting maximum HP | 20 |
    | Starting player level | 1 |
    | Starting energy | 3 |
    | Starting player Speed | 5 |
    | Starting hand size | 4 |
    | Starting deck size | 10 |
    | Maximum deck size | 20 |
    | Maximum hand size | 4 |
    | Maximum energy | 10 |
    | Maximum card level | 10 |
    | Starting weapon level | 3 |
    | Starting spell level | 3 |
    | Starting magical items | 2 |
    | Starting Recovery cards | 2 |
    | Boss minions | 2 |
