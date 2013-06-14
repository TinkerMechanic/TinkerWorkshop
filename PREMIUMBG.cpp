/*Copyright (C) 2013 Freelance Developer TinkerMechanic </> 
 
* This script was made for only training purposes and should not be 
* re-released by anyone besides the original owner of the script. 
* Any kind of breaking those rules will be reported.
*/

#include "Battleground.cpp"
#include "Battleground.h"
#include "Chat.h"
#include "Chathandler.cpp"
#include "ScriptPCH.h"
 
#define SPELL_ARENA_PREPARATION "14185"
#define NOTIFICATION_COLOR "cff9f3434"
 
class PremiumBGPrivileges : public PlayerScript
{
    public:
        PremiumBGPrivileges() : PlayerScript("PremiumBGPrivileges") { }
        
        void PremiumBG(Player* player /*type*/)
        {
            if (player->GetBattleground())
            {
                if(player->GetSession()->GetSecurity() == SEC_PREMIUM) /* Checks if the player is PREMIUM. */
                {
                    player->CastSpell(player, SPELL_ARENA_PREPARATION, true); 
                    player->GetSession()->SendNotification("NOTIFICATION_COLOR Premium members do get privileges in the Battlegrounds, to check out those privileges talk to Master Fu inside the battleground."); 
                }
            }
        }
};
 
void AddSC_PremiumBGPrivileges()
{
    new PremiumBGPrivileges();
}
