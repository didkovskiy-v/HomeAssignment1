#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
private:
    std::string leader_name_;
    bool medic_mode_;

public:
    Autobot(const std::string& name, unsigned int level, unsigned int strength,
            unsigned int range, unsigned int ammo, const std::string& leader_name,
            bool medic_mode = false, int engine_power = 100);

    std::string GetLeaderName() const;
    bool GetMedicMode() const;

    void SetLeaderName(const std::string& leader_name);
    void SetMedicMode(bool medic_mode);

    bool Transform() override;
    bool Heal();
};
#endif

