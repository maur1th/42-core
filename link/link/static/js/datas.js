jQuery(function ($) {
        var data2 = [3, 9, 12, 14, 22, 32, 45, 12, 67, 45, 55, 7];
        var data3 = [23, 19, 11, 134, 242, 352, 435, 22, 637, 445, 555, 57];
        var data4 = [10, 20, 30, 40, 50];
        var data5 = [23, 19, 11, 134, 242, 352, 435, 22, 637, 445, 555, 57];
        var data6 = [87, 100 - 87];

        var today = moment().format('DD/MM/YYYY');


        $(function () {
          $(".links a").shieldTooltip();
          $("#chart1").shieldChart({
            exportOptions: {
              image: false,
              print: false
            },
            primaryHeader: {
              text: 'Assurance Vie',
              align: 'center'
            },
            axisY: {
              title: {
                text: "Break-Down for selected quarter"
              },
            },
            axisX: {
              categoricalValues: ["23/08/2013", "31/12/2013", "31/12/2014", "31/12/2015", today]
            },
            dataSeries: [{
              seriesType: "line",
              data: [1300000, 1300000 + 44787.9476113673, 1300000 + 44787.9476113673 + 80916.8145389641, 1300000 + 44787.9476113673 + 80916.8145389641 + 98769.5744280268, 1300000 + 44787.9476113673 + 80916.8145389641 + 98769.5744280268 + -94378.3334875151],
              collectionAlias: "P&L"
              // color: "red"
            }]
          });
          // $("#chart4").shieldChart({
          //  exportOptions: {
          //    image: false,
          //    print: false
          //  },
          //  dataSeries: [{
          //    seriesType: "line",
          //    data: data2
          //  }, {
          //    seriesType: "line",
          //    data: data3
          //  }]
          // });

          $("#chart3").shieldChart({
            exportOptions: {
              image: false,
              print: false
            },
            primaryHeader: {
              text: 'Part des produits dans le portefeuille',
              align: 'center'
            },
            dataSeries: [{
              seriesType: "donut",
              data: data4
            }]
          });

          // $("#chart2").shieldChart({
          //  exportOptions: {
          //    image: false,
          //    print: false
          //  },
          //  dataSeries: [{
          //    seriesType: "donut",
          //    data: data5
          //  }]
          // });

          $("#chart5").shieldChart({
            exportOptions: {
              image: false,
              print: false
            },
            primaryHeader: {
              text: 'Variation journalière',
              align: 'center'
            },
            dataSeries: [{
              seriesType: "line",
              data: data5,
              color: 'red'
            }],
          });

          $("#chart6").shieldChart({
            exportOptions: {
              image: false,
              print: false
            },
            dataSeries: [{
              seriesType: "donut",
              data: data5
            }]
          });
        });
      });








