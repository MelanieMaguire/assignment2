public:
    explicit Jet(string brand, string model, int numEngines = 1);

    virtual ~Bicycle();
    int getGearCount();
    void setGearCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
